#pragma once

#include <any>
#include <functional>
#include <string>

namespace pubsub {

class IPublishSubscribe {
public:
  virtual void publish(const std::any &data,
                       const std::string &channel_name) = 0;

  using Callback = std::function<void(const std::any &data,
                                      const std::string &channel_name)>;

  virtual void subscribe(const std::any &channel_name,
                         const Callback &callback) = 0;
};

} // namespace pubsub