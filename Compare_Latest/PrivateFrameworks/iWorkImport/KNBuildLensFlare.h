/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNAnimationEffect.h>

#import "KNChunkableBuildAnimator-Protocol.h"

@class NSMutableArray;

// Not exported
@interface KNBuildLensFlare : KNAnimationEffect <KNChunkableBuildAnimator>
{
    double mGlobalScale;
    double mGlobalDuration;
    NSMutableArray *mLayerToOldParentArray;
}

+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (id)animationsWithContext:(id)arg1;
- (void)addLayerWithImageRef:(struct CGImage *)arg1 toResultDictionary:(id)arg2 withLayer:(id)arg3 minScale:(double)arg4 maxScale:(double)arg5 opacity:(double)arg6 translation:(double)arg7 rotation:(double)arg8 direction:(unsigned long long)arg9;
- (void)animationDidEndWithContext:(id)arg1;
- (double)stretchPercent:(double)arg1 toFill:(double)arg2;
- (id)p_layerWithImage:(struct CGImage *)arg1 scale:(double)arg2 centeredAt:(struct CGPoint)arg3;
- (void)dealloc;

@end
