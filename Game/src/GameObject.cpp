#include "../include/GameObject.hpp"

GameObject::GameObject() {
    
}

void GameObject::setPosition(const pos_t& position) {
    position_.x = position.x;
    position_.y = position.y;
}
void GameObject::setPosition(const float& X, const float& Y) {
    position_.x = X;
    position_.y = Y;
}