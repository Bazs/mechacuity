#pragma once

#include "i_publish_subscribe.hpp"

#include <memory>

namespace application {

class PubSubClient {
public:
  PubSubClient(std::shared_ptr<pubsub::IPublishSubscribe> pub_sub_interface);

  void doWork();

private:
  std::shared_ptr<pubsub::IPublishSubscribe> pub_sub_interface_;
};

} // namespace application