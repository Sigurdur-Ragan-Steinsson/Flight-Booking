#include <iostream>

using namespace std;

class FlightBooking {

public:
  FlightBooking(int inputId, int inputCapacity, int inputReserved);
  void printStatus();
private:
  int id;
  int capacity;
  int reserved;
};
void FlightBooking::printStatus()
{

  cout << "Flight " << id << ":" << reserved <<  "/" <<  capacity << "(" << (reserved*1.0) / capacity * 100 << "%)" << "seats taken";
}
FlightBooking::FlightBooking(int inputId, int inputCapacity, int inputReserved)
{
  id = inputId;
  capacity = inputCapacity;
  reserved = inputReserved;
}
int main() {
  int reserved = 0,
      capacity = 0;
  std::cout << "Provide flight capacity: ";
  std::cin >> capacity;
  std::cout << "Provide number of reserved seats: ";
  std::cin >> reserved;
  FlightBooking booking(1, capacity, reserved);
  booking.printStatus();
  return 0;
}