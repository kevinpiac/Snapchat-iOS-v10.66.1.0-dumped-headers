//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNNetworkApiNetworkApi : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::network_api::NetworkApi>, std::__1::shared_ptr<snap::network_api::NetworkApi>> _cppRefHandle;
}

+ (id)createInstance:(id)arg1 uiPageChangeNotifier:(id)arg2 dataSaverModeChangeNotifier:(id)arg3 connectivityChangeNotifier:(id)arg4 userLogOutNotifier:(id)arg5 bandwidthChangeNotifier:(id)arg6 networkManager:(id)arg7 certPins:(id)arg8 cronetExperimentalOptions:(id)arg9 loggingDir:(id)arg10 timeoutInterval:(long long)arg11 dataProviderFactory:(id)arg12 networkDispatchQueue:(id)arg13;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (id)initWithCpp:(const shared_ptr_8a449218 *)arg1;
- (id)pathToNetLog;
- (_Bool)startNetLog;
- (void)stopNetLog;
- (void)submit:(id)arg1 downloadFilePath:(id)arg2 rankingSignals:(id)arg3 executor:(id)arg4 progressiveCallback:(id)arg5 callback:(id)arg6 uploadData:(id)arg7 uploadFilePath:(id)arg8;
- (void)update:(id)arg1 rankingSignals:(id)arg2;
- (void)updateUILayoutOrder:(id)arg1 uiPageInfo:(id)arg2 mediaContextType:(long long)arg3;

@end

