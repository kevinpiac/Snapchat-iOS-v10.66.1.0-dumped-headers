//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface SCSummaries : NSObject
{
    NSMutableDictionary *_mutableUrlSummaryDictionary;
    NSMutableDictionary *_mutableAddressSummaryDictionary;
    NSMutableArray *_urlLinks;
    NSMutableArray *_phoneNumbers;
    NSString *_conversationId;
    NSString *_messageId;
    NSString *_text;
    NSArray *_mediaCardAttributes;
}

- (void).cxx_destruct;
- (void)_fetchAddressMediaCardsFromServerIfNecessaryWithUserSession:(id)arg1;
- (void)_fetchMediaCardsWithUrls:(id)arg1 credentials:(id)arg2 userSession:(id)arg3;
- (void)_fetchURLMediaCardsFromServerIfNecessaryWithUserSession:(id)arg1;
- (void)_fetchURLThumbnailImages:(id)arg1;
- (void)_initSummaries;
@property(readonly, nonatomic) NSDictionary *addressSummaryDictionary;
- (void)fetchMediaCardsFromServerIfNecessaryWithUserSession:(id)arg1;
- (id)initWithText:(id)arg1 mediaCardAttributes:(id)arg2 conversationId:(id)arg3 messageId:(id)arg4;
@property(readonly, nonatomic) NSArray *mediaCardAttributes; // @synthesize mediaCardAttributes=_mediaCardAttributes;
- (id)summaryForAddress:(id)arg1;
- (id)summaryForURL:(id)arg1;
@property(readonly, nonatomic) NSDictionary *urlSummaryDictionary;

@end

