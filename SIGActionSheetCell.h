//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SIGCell.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SIGActionSheet, SIGTargetActionDispatcher, UILongPressGestureRecognizer;

@interface SIGActionSheetCell : SIGCell <UIGestureRecognizerDelegate>
{
    SIGTargetActionDispatcher *_eventDispatcher;
    _Bool _actionSpecified;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SIGActionSheet *_actionSheet;
    CDUnknownBlockType _action;
}

+ (id)cardWithImage:(id)arg1 titleText:(id)arg2;
+ (id)descriptionCellWithText:(id)arg1 description:(id)arg2;
+ (id)destructiveOptionCellWithText:(id)arg1;
+ (id)footerCellWithText:(id)arg1;
+ (id)moreOptionsCellWithText:(id)arg1;
+ (id)moreOptionsCellWithText:(id)arg1 compressed:(_Bool)arg2;
+ (id)optionCellWithText:(id)arg1;
+ (id)optionCellWithText:(id)arg1 isCompressed:(_Bool)arg2;
+ (id)selectCellWithText:(id)arg1 value:(_Bool)arg2;
+ (id)selectCellWithText:(id)arg1 value:(_Bool)arg2 compressed:(_Bool)arg3;
+ (id)sendToCellWithText:(id)arg1;
+ (id)sendToCellWithText:(id)arg1 isCompressed:(_Bool)arg2;
+ (id)switchCellWithText:(id)arg1 value:(_Bool)arg2;
+ (id)switchCellWithText:(id)arg1 value:(_Bool)arg2 compressed:(_Bool)arg3;
+ (id)valueCellWithText:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
- (void)_addTarget:(id)arg1 action:(SEL)arg2;
- (void)_assertValidActionSheet;
- (void)_markActionSpecifiedOrAssert;
- (void)_onLongPress:(id)arg1;
- (void)_possiblyInvokeActionBlock;
- (void)_sendActions;
- (void)_toggleSelectionState;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) __weak SIGActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (id)block:(CDUnknownBlockType)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)target:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

