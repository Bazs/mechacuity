#pragma once

#include "i_publish_subscribe.hpp"

namespace pubsub {

class BasicPublishSubscribe : public IPublishSubscribe {
public:
  void publish(const std::any &data, const std::string &channel_name) override;

  void subscribe(const std::any &channel_name,
                 const Callback &callback) override;
};

} // namespace pubsub