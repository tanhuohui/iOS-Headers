//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationRenderer.h>

@class CALayer, NSDictionary, NSMutableArray, TSDFPSCounter;

__attribute__((visibility("hidden")))
@interface KNTransitionRenderer : KNAnimationRenderer
{
    NSMutableArray *mTextures;
    int mNumberOfAnimationsStarted;
    NSDictionary *mAnimatedLayers;
    BOOL mOutgoingSlideRendered;
    BOOL mShouldAnimateTransition;
    BOOL mAnimationsRanToCompletion;
    NSDictionary *mAttributes;
    id mTransitionEndCallbackTarget;
    SEL mTransitionEndCallbackSelector;
    id mTransitionImmediateEndCallbackTarget;
    SEL mTransitionImmediateEndCallbackSelector;
    CALayer *mBackgroundLayer;
    TSDFPSCounter *mFPSCounter;
}

- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)stopAnimations;
- (void)forceRemoveAnimations;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)p_reset;
- (void)p_removeAnimationsOnAnimatedLayers;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (BOOL)p_addAnimations:(id)arg1 atTime:(double)arg2 relativeToCurrentMediaTime:(BOOL)arg3;
- (BOOL)addAnimationsAtTime:(double)arg1 relativeToCurrentMediaTime:(BOOL)arg2;
- (void)animateWithDelay:(double)arg1;
- (void)renderOutgoingSlideAndPrecacheIncomingSlide;
- (void)renderSlideIndex:(unsigned int)arg1;
- (void)setupLayerTreeForTransition;
- (void)p_generateLayers;
- (id)description;
- (void)p_checkForNullTransitions:(Class)arg1;
- (void)registerForTransitionImmediateEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForTransitionEndCallback:(SEL)arg1 target:(id)arg2;
- (void)setupPluginContext;
- (id)plugin;
- (void)teardownTransitionIsExitingShow:(BOOL)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithEffectClass:(Class)arg1 direction:(unsigned int)arg2 duration:(double)arg3 session:(id)arg4 attributes:(id)arg5 animatedSlideView:(id)arg6;

@end
