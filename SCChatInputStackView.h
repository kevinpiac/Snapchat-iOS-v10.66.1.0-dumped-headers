//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIStackView.h>

#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSString;

@interface SCChatInputStackView : UIStackView <SCTraceEnabled>
{
}

- (void)_fadeInItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_fadeOutItem:(id)arg1;
- (void)_popInItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_popOutItem:(id)arg1;
- (void)_popOutItem:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setupDefaultLayoutValues;
- (void)_setupPositionsForInputItems:(id)arg1;
- (void)addInputItem:(id)arg1 animationStyle:(unsigned long long)arg2;
- (id)init;
- (id)initWithInputItems:(id)arg1;
- (id)inputItemAtIndex:(unsigned long long)arg1;
@property(retain, nonatomic) NSArray *inputItems;
- (void)insertInputItem:(id)arg1 atIndex:(unsigned long long)arg2 animationStyle:(unsigned long long)arg3;
- (struct CGSize)intrinsicContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
