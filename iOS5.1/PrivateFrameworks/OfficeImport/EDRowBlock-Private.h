/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDRowBlock.h>

@interface EDRowBlock (Private)
- (unsigned long)startOfCellsOrThrow;
- (void)checkCellOffsetOrThrow:(unsigned long)arg1;
- (void)removeCellAtIndex:(unsigned int)arg1 rowInfo:(struct EDRowInfo **)arg2;
@end

