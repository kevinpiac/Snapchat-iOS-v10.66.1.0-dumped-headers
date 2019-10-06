//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerSearchSessionProtocol-Protocol.h"

@class NSDictionary, NSString, SCSearchCachedRequestManager, SCSearchResultSectionDescriptor, SCSearchSession, SCUserSession;

@interface SCLensExplorerSearchSession : NSObject <SCLensExplorerSearchSessionProtocol>
{
    SCUserSession *_userSession;
    SCSearchSession *_searchSession;
    SCSearchCachedRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (double)delayForQuery:(id)arg1;
- (id)initWithUserSession:(id)arg1;
@property(readonly, nonatomic) SCSearchResultSectionDescriptor *loadingSectionDescriptor;
- (_Bool)locationAuthorized;
@property(readonly, nonatomic) SCSearchResultSectionDescriptor *noResultSectionDescriptor;
- (id)requestForQuery:(id)arg1;
@property(readonly, nonatomic) SCSearchCachedRequestManager *requestManager; // @synthesize requestManager=_requestManager;
- (id)searchRequestForQuery:(id)arg1;
@property(readonly, nonatomic) SCSearchSession *searchSession; // @synthesize searchSession=_searchSession;
@property(readonly, nonatomic) NSDictionary *sectionParsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
