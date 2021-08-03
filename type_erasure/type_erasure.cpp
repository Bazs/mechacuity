#include "basic_publish_subscribe.hpp"
#include "client.hpp"

int main() {
  auto pub_sub_interface = std::make_shared<pubsub::BasicPublishSubscribe>();
  application::PubSubClient client(pub_sub_interface);
  client.doWork();
}