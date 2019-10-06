//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, SOJURichStoryRichStoryDeepLinkAttachment, SOJUUnlockablesAppInstallAttachment, SOJUUnlockablesLongFormVideoAttachment, SOJUUnlockablesWebViewAttachment;

@protocol SOJUUnlockablesAttachment <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUUnlockablesAppInstallAttachment *appInstall;
@property(readonly, copy, nonatomic) NSString *attachmentType;
@property(readonly, copy, nonatomic) NSString *ctaText;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryDeepLinkAttachment *deepLink;
@property(readonly, copy, nonatomic) NSString *localizedCtaText;
@property(readonly, copy, nonatomic) SOJUUnlockablesLongFormVideoAttachment *longFormVideo;
@property(readonly, copy, nonatomic) SOJUUnlockablesWebViewAttachment *webView;
@end
