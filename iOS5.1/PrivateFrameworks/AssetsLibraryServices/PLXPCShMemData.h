/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface PLXPCShMemData : NSData
{
    void *_buffer;
    unsigned long _length;
}

- (unsigned int)length;
- (const void *)bytes;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithXPCShmem:(void *)arg1;

@end

