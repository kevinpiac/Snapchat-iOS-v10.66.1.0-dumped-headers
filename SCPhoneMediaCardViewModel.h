//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCMediaCardViewModel.h"

#import "SCChatPhoneMediaCardViewModel-Protocol.h"

@class NSString;

@interface SCPhoneMediaCardViewModel : SCMediaCardViewModel <SCChatPhoneMediaCardViewModel>
{
    NSString *_phoneNumber;
}

- (void).cxx_destruct;
- (id)defaultThumbnailImage;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 isGrayScale:(_Bool)arg3 shouldActOnGesture:(_Bool)arg4 phoneNumber:(id)arg5 disableContextMenu:(_Bool)arg6;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

