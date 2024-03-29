//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileSectionDescriptorProviding-Protocol.h"

@class NSString, SCExperimentManager;
@protocol SCUnifiedProfileSectionDescriptorProvidingDelegate;

@interface SCGroupUnifiedProfileSectionDescriptorProvider : NSObject <SCTraceEnabled, SCUnifiedProfileSectionDescriptorProviding>
{
    NSString *_groupId;
    SCExperimentManager *_experimentManager;
    id <SCUnifiedProfileSectionDescriptorProvidingDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCUnifiedProfileSectionDescriptorProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchSectionDescriptors:(CDUnknownBlockType)arg1;
- (id)initWithGroupId:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

