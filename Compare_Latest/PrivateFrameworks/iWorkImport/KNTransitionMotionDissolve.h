/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNAnimationEffect.h>

#import "KNFrameAnimator-Protocol.h"
#import "KNTransitionAnimator-Protocol.h"

@class KNMotionBlurAnimationPluginWrapper;

// Not exported
@interface KNTransitionMotionDissolve : KNAnimationEffect <KNTransitionAnimator, KNFrameAnimator>
{
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
}

+ (int)rendererTypeForCapabilities:(id)arg1;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animationsWithContext:(id)arg1;
- (void)dealloc;

@end
