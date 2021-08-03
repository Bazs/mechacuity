#include "client.hpp"

namespace application {

PubSubClient::PubSubClient(
    std::shared_ptr<pubsub::IPublishSubscribe> pub_sub_interface)
    : pub_sub_interface_(std::move(pub_sub_interface)) {
  if (!pub_sub_interface_) {
    throw std::invalid_argument("nullptr argument");
  }
}

void PubSubClient::doWork() {
  int data = 16;
  pub_sub_interface_->publish(std::any(data), "channel");
}

} // namespace application