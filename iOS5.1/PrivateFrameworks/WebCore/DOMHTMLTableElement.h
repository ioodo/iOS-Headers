/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLCollection, DOMHTMLTableCaptionElement, DOMHTMLTableSectionElement, NSString;

@interface DOMHTMLTableElement : DOMHTMLElement
{
}

@property(retain) DOMHTMLTableCaptionElement *caption;
@property(retain) DOMHTMLTableSectionElement *tHead;
@property(retain) DOMHTMLTableSectionElement *tFoot;
@property(readonly, retain) DOMHTMLCollection *rows;
@property(readonly, retain) DOMHTMLCollection *tBodies;
@property(copy) NSString *align;
@property(copy) NSString *bgColor;
@property(copy) NSString *border;
@property(copy) NSString *cellPadding;
@property(copy) NSString *cellSpacing;
@property(copy) NSString *frameBorders;
@property(copy) NSString *rules;
@property(copy) NSString *summary;
@property(copy) NSString *width;
- (id)createTHead;
- (void)deleteTHead;
- (id)createTFoot;
- (void)deleteTFoot;
- (id)createCaption;
- (void)deleteCaption;
- (id)insertRow:(int)arg1;
- (void)deleteRow:(int)arg1;

@end
