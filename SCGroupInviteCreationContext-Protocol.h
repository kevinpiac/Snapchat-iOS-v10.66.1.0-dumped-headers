//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@class SCGroupInviteDetails;
@protocol SCComposerFoundationApplicationProtocol, SCGroupStickerFontProvider;

@protocol SCGroupInviteCreationContext <NSObject, SCComposerMarshallable>
- (void)didCancelInviteCreation;
- (void)didSelectInviteWithInvite:(SCGroupInviteDetails *)arg1;

@optional
- (void)fetchExistingInvitesThatCanBeSelectedWithCallback:(void (^)(NSArray *))arg1;
- (id <SCComposerFoundationApplicationProtocol>)getApplication;
- (id <SCGroupStickerFontProvider>)getFontProvider;
@end

