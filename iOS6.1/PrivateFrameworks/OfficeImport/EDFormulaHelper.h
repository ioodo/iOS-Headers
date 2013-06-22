/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EFHelper-Protocol.h"

@class ECMappingContext, EDWorkbook, EDWorksheet;

@interface EDFormulaHelper : NSObject <EFHelper>
{
    EDWorkbook *mWorkbook;
    EDWorksheet *mWorksheet;
    int mRowNumber;
    int mColumnNumber;
    ECMappingContext *mMappingContext;
}

- (int)columnNumber;
- (int)rowNumber;
- (id)workbook;
- (_Bool)isThereContentOutsideOfLassoBoundsForRowMin:(unsigned int)arg1 rowMax:(unsigned int)arg2 columnMin:(unsigned int)arg3 columnMax:(unsigned int)arg4;
- (int)resolveFunctionName:(id)arg1;
- (BOOL)isCurrentSheet:(id)arg1;
- (unsigned int)resolveTableColumn:(id)arg1 columnName:(id)arg2;
- (unsigned int)resolveTableToSheetId:(id)arg1;
- (id)resolveTable:(id)arg1;
- (unsigned int)resolveFile:(id)arg1;
- (unsigned int)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
- (unsigned int)resolveSheet:(id)arg1;
- (unsigned int)resolveName:(id)arg1;
- (void)dealloc;
- (id)initWithWorkbook:(id)arg1 worksheet:(id)arg2 rowNumber:(int)arg3 columnNumber:(int)arg4;
- (unsigned int)createIndexWithType:(int)arg1 firstSheetIndex:(unsigned int)arg2 lastSheetIndex:(unsigned int)arg3;

@end
