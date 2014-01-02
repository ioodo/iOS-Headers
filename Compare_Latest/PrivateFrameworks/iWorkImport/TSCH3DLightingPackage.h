/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

// Not exported
@interface TSCH3DLightingPackage : NSObject <NSCopying>
{
    NSString *mName;
    NSMutableArray *mLights;
}

+ (id)package;
+ (id)packageFromName:(id)arg1;
+ (id)allNamedPackages;
+ (id)localizedNameForName:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=mName;
@property(readonly, nonatomic) NSString *localizedName;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (void)addLight:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
