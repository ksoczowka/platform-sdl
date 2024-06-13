#pragma once

#include "Pair.hpp"

#include <memory>

class GameObject {
 public:
    using pos_t = Pair<float>;

    GameObject();
    
    pos_t getPosition() const { return position_; }

    void setPosition(const pos_t& position);
    void setPosition(const float& X, const float& Y);

 private:
    pos_t position_;
};