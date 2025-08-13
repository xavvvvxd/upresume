#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/PauseLayer.hpp>
class $modify(UpPauseLayer, PauseLayer) {
	virtual void keyDown(cocos2d::enumKeyCodes keyCode) {
		PauseLayer::keyDown(keyCode);
		if (keyCode != cocos2d::enumKeyCodes::KEY_Up) return;

		// auto gameManager = GameManager::sharedState();
		// gameManager->getPlayLayer()->resume();

		// this->runAction(cocos2d::CCCallFunc::create(this, callfunc_selector(UpPauseLayer::removeSelf)));
		this->onResume(this->getChildByID("play-button"));
	}

	// void removeSelf() {
	// 	this->removeFromParentAndCleanup(true);
	// }
};