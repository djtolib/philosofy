/**
 * Created by Tolibjon on 21.07.2021.
 **/
#include <iostream>
#include <thread>

using namespace std;

enum class teams{
  MOBILE,
  SDK,
  KOS
};
void interview(teams team){
  this_thread::sleep_for(chrono::minutes{90});
}

int main() {
  thread interview_one{interview,   teams::MOBILE},
         interview_two{interview,   teams::KOS},
         interview_three{interview, teams::SDK};

  interview_one.  join();
  interview_two.  join();
  interview_three.join();
}
