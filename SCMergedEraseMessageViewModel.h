//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMergedStatusMessageChatViewModel.h"

@class NSString;

@interface SCMergedEraseMessageViewModel : SCMergedStatusMessageChatViewModel
{
    NSString *_mergedMessageSenderDisplayName;
    NSString *_textForStatusMessageLabel;
}

- (void).cxx_destruct;
- (void)_updateTextForStatusMessageLabel;
- (void)addMessage:(id)arg1;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (id)textForStatusMessageLabel;

@end

