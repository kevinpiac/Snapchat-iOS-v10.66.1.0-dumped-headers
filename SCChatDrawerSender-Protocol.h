//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCChatInputAudioNoteControllerDelegate-Protocol.h"
#import "SCChatInputMediaAccessorySender-Protocol.h"
#import "SCChatInputStickerAccessorySender-Protocol.h"

@class NSData;

@protocol SCChatDrawerSender <SCChatInputStickerAccessorySender, SCChatInputMediaAccessorySender, SCChatInputAudioNoteControllerDelegate>
- (void)sendVideoNoteWithData:(NSData *)arg1 duration:(double)arg2;
@end
