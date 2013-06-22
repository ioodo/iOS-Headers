/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CHDDataValuesCollection : NSObject
{
    struct __CFData *mPackedValues;
    unsigned int mDataValueCount;
    struct __CFDictionary *mIndexToDataValueMap;
    _Bool mContainsStringValue;
}

- (_Bool)containsStringValue;
- (void)finishReading;
- (id)dataValueWithIndex:(unsigned int)arg1;
- (id)dataValueAtIndex:(unsigned int)arg1;
- (struct CHDDataPoint *)dataPointWithIndex:(unsigned int)arg1;
- (struct CHDDataPoint *)dataPointAtIndex:(unsigned int)arg1;
- (_Bool)addDataValue:(id)arg1;
- (_Bool)addDataPoint:(struct CHDDataPoint *)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)resetWithDataPointCount:(unsigned int)arg1;
- (id)initWithDataPointCount:(unsigned int)arg1;
- (id)init;
- (void)cleanup;
- (void)setupBufferForValues:(unsigned int)arg1;

@end
