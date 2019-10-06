//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCSearchContentViewControllerContext;

@protocol SCSearchContentViewControlling <NSObject>
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext;

@optional
- (void)didTapCloseButton;
- (void)searchControllerDidBeginEditing;
- (void)searchControllerDidChangeToText:(NSString *)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)searchControllerDidEndEditing;
- (void)searchControllerDidTapClearButton;
- (_Bool)searchControllerShouldReturnWithSearchText:(NSString *)arg1;
- (_Bool)shouldBeginInteractiveDismissalGesture;
@end
