//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SIGTextFieldPillScrollView;

@protocol SIGTextFieldPillScrollViewObserver <NSObject>
- (void)textFieldPillScrollView:(SIGTextFieldPillScrollView *)arg1 intrinsicSizeDidChange:(struct CGSize)arg2;
- (void)textFieldPillScrollView:(SIGTextFieldPillScrollView *)arg1 textReceived:(NSString *)arg2;
@end
