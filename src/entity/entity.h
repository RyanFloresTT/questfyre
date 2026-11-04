#pragma once
#include "lantern/raii/asset_scope.h"

class Entity {
public:
    explicit            Entity(AssetScope& assets) : assets(assets) {}
    virtual             ~Entity() = default;
    virtual void        Draw() const = 0;
    virtual void        Update(float dt) = 0;
    virtual Vector2     GetMovementDirection() = 0;
    [[nodiscard]] float Health() const {return health;}

protected:
    const float width = 64.f;
    const float height = 64.f;
    AssetScope& assets;
    Vector2 position = {};
    float speed = 1000.f;
    float health = 100.f;
};