//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatInputItemControllable-Protocol.h"

@class NSString, SCChatInputItem, SCChatInputViewController;
@protocol SCChatInputExpandItemControllerDelegate;

@interface SCChatInputExpandItemController : NSObject <SCChatInputItemControllable>
{
    SCChatInputViewController *inputController;
    SCChatInputItem *inputItem;
    id <SCChatInputExpandItemControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCChatInputExpandItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didDeselectInputItem:(id)arg1;
- (void)didSelectInputItem:(id)arg1;
@property(nonatomic) __weak SCChatInputViewController *inputController; // @synthesize inputController;
@property(nonatomic) __weak SCChatInputItem *inputItem; // @synthesize inputItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

