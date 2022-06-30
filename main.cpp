#include <iostream> 
#include <img_copy.pb.h>

using namespace std;
 
int main() {
  // using namespace google::protobuf;
  // using namespace google::protobuf::io;
  // using namespace google::protobuf::compiler;

  ifstream inp("out.bin", std::ios_base::binary);
  Serialize::image img;

  if (img.ParseFromIstream(&inp)) {
    cout << "id" << img.id << endl;
  }
 
  return 0;
}