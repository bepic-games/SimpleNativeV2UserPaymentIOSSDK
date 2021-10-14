//
//  SimpleNativeUserPayment.h
//  SimpleNativeUserPayment
//
//  Created by qus on 2021/10/8.
//

#ifndef SimpleNativeUserPayment_h
#define SimpleNativeUserPayment_h
#import <Foundation/Foundation.h>
#import <SimpleNativeBase/SimpleNativeBase.h>

//inner model

@interface PaymentParamsResult : NSObject
@property (nonatomic) long long gameOrderId;
@property (nonatomic,strong) NSString * paymentMethod;
@property (nonatomic,strong) NSDictionary * actionInfo;
@end

@interface ERROR_CODE:NSObject

//连接服务器失败
+(State *)  CLIENT_CONNECTION_ERROR ;
//请求结果不成功
+(State *) CLIENT_CODE_NOT_SUCCESS ;
//未登陆
+(State *) CLIENT_HAS_NOT_LOGIN ;
//登陆方式不支持
+(State *) CLIENT_NOT_SUPPORT_THIS_LOGINTYPE ;
//登陆参数获取失败
+(State *) CLIENT_GET_LOGIN_PARAMS_FAIL ;
//找不到品相
+(State *) CLIENT_NOT_FIND_ITEM ;
+(State *) CLIENT_ITEMS_IS_NULL ;
+(State *) CLIENT_SDK_NOT_INIT ;
//自动登录失败
+(State *) CLIENT_AUTO_LOGIN_FAIL ;

//未知错误
+(State *) CLIENT_UNKNOW_EXCEPTION ;

@end


@interface SimpleNativeUserPayment<SimpleSDKUPProtocol>: NSObject

@end



//! Project version number for SimpleNativeUserPayment.
FOUNDATION_EXPORT double SimpleNativeUserPaymentVersionNumber;

//! Project version string for SimpleNativeUserPayment.
FOUNDATION_EXPORT const unsigned char SimpleNativeUserPaymentVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SimpleNativeUserPayment/PublicHeader.h>


#endif
