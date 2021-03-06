/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration-Protocol.h"

@class NSString, TSCHChartGrid;

// Not exported
@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration>
{
    TSCHChartGrid *mGrid;
    unsigned long long mIndex;
}

@property(readonly, nonatomic) TSCHChartGrid *grid; // @synthesize grid=mGrid;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(retain, nonatomic) NSString *name;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id *)valuesAtIndexes:(struct _NSRange)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithChartGrid:(id)arg1 index:(unsigned long long)arg2;

@end

