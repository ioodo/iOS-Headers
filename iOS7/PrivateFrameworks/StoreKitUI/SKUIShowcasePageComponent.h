/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray;

@interface SKUIShowcasePageComponent : SKUIPageComponent
{
    long long _missingItemCount;
    NSArray *_showcaseItems;
}

@property(readonly, nonatomic) NSArray *showcaseItems; // @synthesize showcaseItems=_showcaseItems;
- (void).cxx_destruct;
- (void)_updateWithMissingItems:(id)arg1;
- (id)metricsElementName;
- (_Bool)isMissingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id)arg2;
- (long long)componentType;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;

@end

