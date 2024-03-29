//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCSnapKitAppStoryMetadata;

@interface SCSnapKitAppState : SCDocObject <NSCopying>
{
    NSString *_applicationId;
    SCSnapKitAppStoryMetadata *_appStoryMetadata;
    NSString *_applicationName;
    NSString *_applicationIconURL;
    NSArray *_scopesApproved;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapKitAppStoryMetadata *appStoryMetadata; // @synthesize appStoryMetadata=_appStoryMetadata;
@property(readonly, copy, nonatomic) NSString *applicationIconURL; // @synthesize applicationIconURL=_applicationIconURL;
@property(readonly, copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
@property(readonly, copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithApplicationId:(id)arg1 appStoryMetadata:(id)arg2 applicationName:(id)arg3 applicationIconURL:(id)arg4 scopesApproved:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *scopesApproved; // @synthesize scopesApproved=_scopesApproved;

@end

