/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration-Protocol.h"

@class NSArray, PLManagedObjectContext;

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration>
{
    PLManagedObjectContext *_managedObjectContext;
    NSArray *_assetObjectIDs;
    NSArray *_albumObjectIDs;
    NSArray *_resultStore;
}

+ (id)enumeratorWithAssetObjectIDs:(id)arg1 albumObjectIDs:(id)arg2 managedObjectContext:(id)arg3;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

@end

