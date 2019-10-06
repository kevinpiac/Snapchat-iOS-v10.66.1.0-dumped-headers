//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaWebLayer-Protocol.h"

@class NSString, NSURL, SCOperaPage, SCOperaSubscriptionConfiguration, UIColor;
@protocol NSObject;

@interface SCOperaLocalWebLayer : NSObject <SCOperaWebLayer>
{
    _Bool _hasPlaceholderContent;
    _Bool _isOpaque;
    _Bool _isUserInteractionEnabled;
    _Bool _shouldForcePaging;
    NSURL *_HTMLURL;
    id <NSObject> _HTMLContentKey;
    NSString *_placeholderContent;
    NSString *_pageId;
    double _webpageOffsetY;
    UIColor *_primaryColor;
    SCOperaPage *_page;
    SCOperaSubscriptionConfiguration *_subscriptionConfiguration;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSObject> HTMLContentKey; // @synthesize HTMLContentKey=_HTMLContentKey;
@property(readonly, nonatomic) NSURL *HTMLURL; // @synthesize HTMLURL=_HTMLURL;
@property(readonly, nonatomic) _Bool hasPlaceholderContent; // @synthesize hasPlaceholderContent=_hasPlaceholderContent;
- (id)initWithProperties:(id)arg1 page:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isOpaque; // @synthesize isOpaque=_isOpaque;
@property(readonly, nonatomic) _Bool isUserInteractionEnabled; // @synthesize isUserInteractionEnabled=_isUserInteractionEnabled;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSString *placeholderContent; // @synthesize placeholderContent=_placeholderContent;
@property(readonly, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, nonatomic) _Bool shouldForcePaging; // @synthesize shouldForcePaging=_shouldForcePaging;
@property(readonly, nonatomic) SCOperaSubscriptionConfiguration *subscriptionConfiguration; // @synthesize subscriptionConfiguration=_subscriptionConfiguration;
- (unsigned long long)type;
- (id)url;
@property(readonly, nonatomic) double webpageOffsetY; // @synthesize webpageOffsetY=_webpageOffsetY;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
