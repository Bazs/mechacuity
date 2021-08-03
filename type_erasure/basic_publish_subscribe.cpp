#include "basic_publish_subscribe.hpp"

namespace pubsub {

void BasicPublishSubscribe::publish(const std::any &data,
                                    const std::string &channel_name) {}

void BasicPublishSubscribe::subscribe(
    const std::any &channel_name, const IPublishSubscribe::Callback &callback) {

}

} // namespace pubsub
