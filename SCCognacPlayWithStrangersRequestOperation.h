//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class SCCognacOperaDataSource;

@interface SCCognacPlayWithStrangersRequestOperation : SCCognacWVJBRequestOperation
{
    SCCognacOperaDataSource *_dataSource;
}

- (void).cxx_destruct;
- (void)_callbackWithAppInstanceId:(id)arg1;
- (void)_launchUserScopedAppInstanceIfNecessary;
- (_Bool)_validateState;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)run;
- (void)teardown;

@end
