/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CALayer;

@interface CAPackage : NSObject
{
    struct _CAPackageData *_data;
}

+ (id)packageWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)packageWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (void)foreachLayer:(id)arg1;
- (id)publishedObjectWithName:(id)arg1;
@property(readonly, getter=isGeometryFlipped) BOOL geometryFlipped;
@property(readonly) CALayer *rootLayer;
- (void)dealloc;
- (void)_readFromArchiveData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)_addClassSubstitutions:(id)arg1;
- (id)substitutedClasses;
- (id)_initWithData:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_initWithContentsOfURL:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end
