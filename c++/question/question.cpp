#include <iostream>
#include <vector>

using namespace std;

// typical return codes
#define SUCCESS 0
#define FAILURE 1

// Following class defines the state of single car in the garage
// it assigns a car its slot its parken intially
class garentry 
{
    private:
        int slot, car;
    public:
        int getslot() {return slot;}
        int getcar() {return car;}

        garentry(void)
        {
            car = slot = 0;
        }

        garentry(int slot1, int car1)
        {
            slot = slot1;
            car = car1;
        }

        // update the new slot for the car
        void setslot(int newslot)
        {
            slot = newslot;
        }
};

// we are going ahead with vector
// Alternate will be list, set even map will do here.

// define the garage for us
typedef vector<garentry> garage;

// the shuffle API
// parameter 1: the current state of garage
// parameter 2: the final state of garage
//
//  here things depend actually on N
//  Since N can be large, i prefer to use pointers 
//  to avoid duplicating the complete garage.
//
//  ShuffleAlg: +1
//  Meaning, car is moved from its current slot to next slot
//  If needed things round-over
//
//  The result will allocated and returned
//  the caller needs to ensure he frees the result once done
//  I can resort to std::auto_ptr/unique_ptr too here
//  but not sure if that should be done 
int shuffle(garage  *initial, garage  *result)
{
    // In case someone messed up the garage, simply handle gracefully
    if (NULL == initial) {
        result = NULL;
        return SUCCESS;
    }

    // what's the garage size, we need to create a new garage of the same size
    int size = initial->size();

    // since we know the size, we don't need to spend cyles
    // on allocating dynamically as needed
    result = new vector<garentry> (size);

    if (NULL == result) {
        // log_err, something fatal went wrong
        return FAILURE;
    }

    // My Shuffle is simple
    // Scan through the garage and shuffle each car's slot
    for (int i=0; i < size; i++)
    {
        // retrive the current status
        garentry entry = (*initial)[i];

        // 1 slot will be empty, 
        // ignore this slot and move on
        if (!entry.getcar()) continue;

        // shuffle the status
        // Simple increment the slot to next one
        // special handling for roll-over
        entry.getslot() == (size - 1) ? entry.setslot(0)
                                      : entry.setslot(entry.getslot() + 1);

        // store the updated garage entry into new garage
        (*result)[i] = entry;
    }

    return SUCCESS;
}

#if 0
int main(void)
{
    return SUCCESS;
}
#endif
