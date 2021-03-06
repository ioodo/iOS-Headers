/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, DOMHTMLOptionsCollection, NSString;

@interface DOMHTMLSelectElement : DOMHTMLElement
{
}

- (void)setCustomValidity:(id)arg1;
- (_Bool)checkValidity;
- (void)remove:(int)arg1;
- (void)add:(id)arg1:(id)arg2;
- (void)add:(id)arg1 before:(id)arg2;
- (id)namedItem:(id)arg1;
- (id)item:(unsigned int)arg1;
- (id)labels;
- (id)validationMessage;
- (id)validity;
@property(readonly) _Bool willValidate;
@property(copy) NSString *value;
@property int selectedIndex;
- (id)selectedOptions;
@property(readonly) int length;
@property(readonly) DOMHTMLOptionsCollection *options;
@property(readonly) NSString *type;
@property int size;
- (void)setRequired:(_Bool)arg1;
- (_Bool)required;
@property(copy) NSString *name;
@property _Bool multiple;
@property(readonly) DOMHTMLFormElement *form;
@property _Bool disabled;
@property _Bool autofocus;

@end

