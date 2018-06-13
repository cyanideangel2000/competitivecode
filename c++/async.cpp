#include <future>
#include <iostream>
#include <vector>

using namespace std;
  
void called_from_async()
{
    std::cout << "Async call" << std::endl;
}
          
int twice(int m)
{
    return 2 * m;
}

int main()
{
    //called_from_async launched in a separate thread if possible
    std::future<void> result(std::async(called_from_async));

    std::cout << "Message from main." << std::endl;

    //ensure that called_from_async is launched synchronously
    //if it wasn't already launched
    result.get();

    cout << "Starting with test 2" << endl;
    std::vector<std::future<int>> futures; 
    for(int i = 0; i < 10; ++i)
    {
        futures.push_back (std::async(twice, i));
        cout << "Twice" << endl;
    }
    for(auto &e : futures)
    {
        std::cout << e.get() << std::endl;
    }
    return 0;
}
