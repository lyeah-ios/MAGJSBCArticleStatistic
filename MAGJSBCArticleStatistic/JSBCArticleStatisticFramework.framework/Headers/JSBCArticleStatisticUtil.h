//
//  JSBCArticleStatisticUtil.h
//  JSBCMasterApp
//
//  Created by 王潇 on 2019/5/5.
//  Copyright © 2019 Min Lin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define JSBCArticleStatisticUtilInstance [JSBCArticleStatisticUtil shareInstance]

typedef NS_ENUM(NSInteger, ArticleType) {
    ArticleTypeUnkown       = -1,   // 未知
    ArticleTypeGraphText    = 10,    // 图文
    ArticleTypeLink         = 20,   // 链接
    ArticleTypePicSet       = 30,   // 图集
    ArticleTypeVideo        = 40,   // 视频
    ArticleTypeVideoAlbum   = 41,   // 视频专辑
    ArticleTypeAudio        = 50,   // 电台音频
    ArticleTypeAudioAlbum   = 51,   // 音频专辑
    ArticleTypleFeature     = 60,   // 专题
    ArticleTypeLive         = 70,   // 互动直播
    ArticleTypeTVLive       = 80,   // 电视直播
    ArticleTypeAudioLive    = 81,   // 音频直播
    ArticleTypeGovernment   = 90,   // 问政
    ArticleTypePubService   = 91,   // 公共服务
    ArticleTypeNodeList     = 100,  // 支持文章跳转至节点列表，列表字段extraid 为节点ID，调用文章列表接口
    ArticleTypeMessage      = 110,  // 系统消息
    ArticleTypeSubscribe    = 120,  // 订阅号首页
    ArticleTypeSubscribeDetail = 121,  // 订阅号详情
};

typedef NS_ENUM(NSInteger, JSBCArticleStatisticType) {
    JSBCArticleStatisticTypeLogin = 1,//登陆
    JSBCArticleStatisticTypeArticle,//浏览文章
    JSBCArticleStatisticTypeHotVideo,//视频点播
    JSBCArticleStatisticTypeAudioVod,//音频点播
    JSBCArticleStatisticTypeTVLive,//视频直播
    JSBCArticleStatisticTypeAudioLive,//音频直播
    JSBCArticleStatisticTypeHDLive,//互动直播
    JSBCArticleStatisticTypeComment = 9,//评论
    JSBCArticleStatisticTypeCollect,//收藏
    JSBCArticleStatisticTypeShare,//分享
    JSBCArticleStatisticTypePraise,//点赞
    JSBCArticleStatisticTypeInvitation = 14,//邀请
    JSBCArticleStatisticTypeSubscribe,//订阅
};

NS_ASSUME_NONNULL_BEGIN

@interface JSBCArticleStatisticUtil : NSObject

+ (JSBCArticleStatisticUtil *)shareInstance;

/**
 * 初始化配置
 * @param appId 应用Id
 * @param appSecret 应用secret
 */
- (void)initWithAppId:(NSString *)appId appSecret:(NSString *)appSecret;

/**
 * 登录埋点
 * @param userId 用户Id
 */
+ (void)addLoginStatisticWithUserId:(NSString *)userId;

/**
 * 行为埋点
 * @param globalId 文章Id
 * @param articleType 文章类型
 * @param userBehavior 用户行为类型
 */
+ (void)addReadArticleStatisticWithGlobalId:(nullable NSString *)globalId
                                articleType:(ArticleType)articleType
                               userBehavior:(JSBCArticleStatisticType)userBehavior;

/**
 * 行为埋点
 * @param globalId 文章Id
 * @param articleType 文章类型
 * @param userBehavior 用户行为类型
 * @param contentLength 内容长度
 * @param readLength 阅读长度
 * @param behaviourDuration 行为时长
 */
+ (void)addReadArticleStatisticWithGlobalId:(nullable NSString *)globalId
                                articleType:(ArticleType)articleType
                               userBehavior:(JSBCArticleStatisticType)userBehavior
                              contentLength:(NSInteger)contentLength
                                 readLength:(NSInteger)readLength
                          behaviourDuration:(NSInteger)behaviourDuration;

@end

NS_ASSUME_NONNULL_END
