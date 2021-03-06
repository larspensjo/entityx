/**
 * Copyright (C) 2012 Alec Thomas <alec@swapoff.org>
 * All rights reserved.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.
 *
 * Author: Alec Thomas <alec@swapoff.org>
 */

#include <algorithm>
#include "entityx/Entity.h"

namespace entityx {

const Entity::Id Entity::INVALID = Entity::Id(-1);

BaseComponent::Family BaseComponent::family_counter_ = 0;

bool Entity::exists() const {
  return entities_ != nullptr && entities_->exists(id_);
}

void Entity::detach() {
  id_ = INVALID;
  entities_ = nullptr;
}

}
