//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, SOJURichStoryRichStoryDeepLinkAttachment, SOJURichStoryRichStoryWebviewAttachment;

@protocol SOJURichStoryRichStoryInteractionZoneItem <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *attachmentType;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryDeepLinkAttachment *deepLink;
@property(readonly, copy, nonatomic) NSString *descriptionValue;
@property(readonly, copy, nonatomic) NSString *itemIcon;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) SOJURichStoryRichStoryWebviewAttachment *webview;
@end

