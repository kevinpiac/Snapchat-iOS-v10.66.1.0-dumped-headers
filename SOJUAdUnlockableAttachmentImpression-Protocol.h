//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class SOJUAdUnlockableDeepLink, SOJUAdUnlockableLongformAppInstall, SOJUAdUnlockableLongformVideoView, SOJUAdUnlockableLongformWebviewView;

@protocol SOJUAdUnlockableAttachmentImpression <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformAppInstall *appInstallImpression;
@property(readonly, copy, nonatomic) SOJUAdUnlockableDeepLink *deepLinkImpression;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformVideoView *longformVideoImpression;
@property(readonly, copy, nonatomic) SOJUAdUnlockableLongformWebviewView *remoteWebpageImpression;
@end

