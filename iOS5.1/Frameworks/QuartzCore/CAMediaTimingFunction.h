/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@interface CAMediaTimingFunction : NSObject <NSCoding>
{
    struct CAMediaTimingFunctionPrivate *_priv;
}

+ (id)functionWithControlPoints:(float)arg1:(float)arg2:(float)arg3:(float)arg4;
+ (id)functionWithName:(id)arg1;
- (id)initWithControlPoints:(float)arg1:(float)arg2:(float)arg3:(float)arg4;
- (void)dealloc;
- (void)_getPoints:(double *)arg1;
- (void)getControlPointAtIndex:(unsigned long)arg1 values:(float [2])arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

