//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCOnDemandGeofilterEventsManager : NSObject
{
    NSString *_odgSessionId;
    NSString *_adAccountId;
    long long _source;
    NSString *_referrer;
    long long _productType;
    unsigned long long _pageSequenceId;
    long long _currentPage;
    long long _previousPage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adAccountId; // @synthesize adAccountId=_adAccountId;
- (void)cleanSessionEventData;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
- (id)initWithSource:(long long)arg1;
- (id)odgSessionId;
@property(nonatomic) unsigned long long pageSequenceId; // @synthesize pageSequenceId=_pageSequenceId;
@property(nonatomic) long long previousPage; // @synthesize previousPage=_previousPage;
- (long long)productType;
- (id)referrer;
- (id)source;
- (void)updateProductType:(long long)arg1;
- (void)updateReferrer:(id)arg1;
- (void)updateSource:(long long)arg1;

@end

