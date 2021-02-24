//该文件为自动生成，请勿手动修改！！！！

#pragma once
#include "nlohmann\json.hpp"

namespace alg_param_setting {
	//--------------------struct_IngoreLeftOffset--------------------
	struct struct_IngoreLeftOffset{
		std::string friendly_name;
		int index;
		std::string value;
		friend void to_json(nlohmann::json& j, const struct_IngoreLeftOffset& p);
		friend void from_json(const nlohmann::json& j, struct_IngoreLeftOffset& p);
	private:
		bool isHaveData;
	};

	void to_json(nlohmann::json& j, const struct_IngoreLeftOffset& p) {
		if (!p.isHaveData) {
			j = nlohmann::json::object();
			return;
		}
		j["friendly_name"] = p.friendly_name;
		j["index"] = p.index;
		j["value"] = p.value;
	}

	void from_json(const nlohmann::json& j, struct_IngoreLeftOffset& p) {
		if (j.empty()) {
			p.isHaveData = false;
			return;
		}
		j.at("friendly_name").get_to(p.friendly_name);
		j.at("index").get_to(p.index);
		j.at("value").get_to(p.value);
		p.isHaveData = true;
	}
	//--------------------struct_camera_params--------------------
	struct struct_camera_params{
		struct_IngoreLeftOffset IngoreLeftOffset;
		struct_IngoreLeftOffset PIXEL_HEIGHT;
		struct_IngoreLeftOffset lowthresh;
		struct_IngoreLeftOffset IngoreRightOffset;
		struct_IngoreLeftOffset PIXEL_WIDTH;
		struct_IngoreLeftOffset cutRightOffset;
		struct_IngoreLeftOffset cutLeftOffset;
		struct_IngoreLeftOffset hightthresh;
		friend void to_json(nlohmann::json& j, const struct_camera_params& p);
		friend void from_json(const nlohmann::json& j, struct_camera_params& p);
	private:
		bool isHaveData;
	};

	void to_json(nlohmann::json& j, const struct_camera_params& p) {
		if (!p.isHaveData) {
			j = nlohmann::json::object();
			return;
		}
		j["IngoreLeftOffset"] = p.IngoreLeftOffset;
		j["PIXEL_HEIGHT"] = p.PIXEL_HEIGHT;
		j["lowthresh"] = p.lowthresh;
		j["IngoreRightOffset"] = p.IngoreRightOffset;
		j["PIXEL_WIDTH"] = p.PIXEL_WIDTH;
		j["cutRightOffset"] = p.cutRightOffset;
		j["cutLeftOffset"] = p.cutLeftOffset;
		j["hightthresh"] = p.hightthresh;
	}

	void from_json(const nlohmann::json& j, struct_camera_params& p) {
		if (j.empty()) {
			p.isHaveData = false;
			return;
		}
		j.at("IngoreLeftOffset").get_to(p.IngoreLeftOffset);
		j.at("PIXEL_HEIGHT").get_to(p.PIXEL_HEIGHT);
		j.at("lowthresh").get_to(p.lowthresh);
		j.at("IngoreRightOffset").get_to(p.IngoreRightOffset);
		j.at("PIXEL_WIDTH").get_to(p.PIXEL_WIDTH);
		j.at("cutRightOffset").get_to(p.cutRightOffset);
		j.at("cutLeftOffset").get_to(p.cutLeftOffset);
		j.at("hightthresh").get_to(p.hightthresh);
		p.isHaveData = true;
	}
	//--------------------struct_common_params--------------------
	struct struct_common_params{
		struct_IngoreLeftOffset CLASS_NUM;
		struct_IngoreLeftOffset BBOX_CONF_THRESH;
		struct_IngoreLeftOffset IGNORE_THRESH;
		struct_IngoreLeftOffset INPUT_H;
		struct_IngoreLeftOffset IMAGE_DIVIDE_HEIGHT;
		struct_IngoreLeftOffset IMAGE_DIVIDE_WIDTH;
		struct_IngoreLeftOffset IS_DIVIDE_IMAGE;
		struct_IngoreLeftOffset INPUT_W;
		struct_IngoreLeftOffset INSTANCE_COUNT_PER_GPU;
		struct_IngoreLeftOffset NMS_THRESH;
		struct_IngoreLeftOffset OVERLAP_HEIGHT;
		struct_IngoreLeftOffset OVERLAP_WIDTH;
		struct_IngoreLeftOffset threshold_lightlow;
		struct_IngoreLeftOffset min_reserved_area;
		friend void to_json(nlohmann::json& j, const struct_common_params& p);
		friend void from_json(const nlohmann::json& j, struct_common_params& p);
	private:
		bool isHaveData;
	};

	void to_json(nlohmann::json& j, const struct_common_params& p) {
		if (!p.isHaveData) {
			j = nlohmann::json::object();
			return;
		}
		j["CLASS_NUM"] = p.CLASS_NUM;
		j["BBOX_CONF_THRESH"] = p.BBOX_CONF_THRESH;
		j["IGNORE_THRESH"] = p.IGNORE_THRESH;
		j["INPUT_H"] = p.INPUT_H;
		j["IMAGE_DIVIDE_HEIGHT"] = p.IMAGE_DIVIDE_HEIGHT;
		j["IMAGE_DIVIDE_WIDTH"] = p.IMAGE_DIVIDE_WIDTH;
		j["IS_DIVIDE_IMAGE"] = p.IS_DIVIDE_IMAGE;
		j["INPUT_W"] = p.INPUT_W;
		j["INSTANCE_COUNT_PER_GPU"] = p.INSTANCE_COUNT_PER_GPU;
		j["NMS_THRESH"] = p.NMS_THRESH;
		j["OVERLAP_HEIGHT"] = p.OVERLAP_HEIGHT;
		j["OVERLAP_WIDTH"] = p.OVERLAP_WIDTH;
		j["threshold_lightlow"] = p.threshold_lightlow;
		j["min_reserved_area"] = p.min_reserved_area;
	}

	void from_json(const nlohmann::json& j, struct_common_params& p) {
		if (j.empty()) {
			p.isHaveData = false;
			return;
		}
		j.at("CLASS_NUM").get_to(p.CLASS_NUM);
		j.at("BBOX_CONF_THRESH").get_to(p.BBOX_CONF_THRESH);
		j.at("IGNORE_THRESH").get_to(p.IGNORE_THRESH);
		j.at("INPUT_H").get_to(p.INPUT_H);
		j.at("IMAGE_DIVIDE_HEIGHT").get_to(p.IMAGE_DIVIDE_HEIGHT);
		j.at("IMAGE_DIVIDE_WIDTH").get_to(p.IMAGE_DIVIDE_WIDTH);
		j.at("IS_DIVIDE_IMAGE").get_to(p.IS_DIVIDE_IMAGE);
		j.at("INPUT_W").get_to(p.INPUT_W);
		j.at("INSTANCE_COUNT_PER_GPU").get_to(p.INSTANCE_COUNT_PER_GPU);
		j.at("NMS_THRESH").get_to(p.NMS_THRESH);
		j.at("OVERLAP_HEIGHT").get_to(p.OVERLAP_HEIGHT);
		j.at("OVERLAP_WIDTH").get_to(p.OVERLAP_WIDTH);
		j.at("threshold_lightlow").get_to(p.threshold_lightlow);
		j.at("min_reserved_area").get_to(p.min_reserved_area);
		p.isHaveData = true;
	}
	//--------------------struct_alg_params--------------------
	struct struct_alg_params{
		std::vector<struct_camera_params> camera_params;
		struct_common_params common_params;
		friend void to_json(nlohmann::json& j, const struct_alg_params& p);
		friend void from_json(const nlohmann::json& j, struct_alg_params& p);
	private:
		bool isHaveData;
	};

	void to_json(nlohmann::json& j, const struct_alg_params& p) {
		if (!p.isHaveData) {
			j = nlohmann::json::object();
			return;
		}
		j["camera_params"] = p.camera_params;
		j["common_params"] = p.common_params;
	}

	void from_json(const nlohmann::json& j, struct_alg_params& p) {
		if (j.empty()) {
			p.isHaveData = false;
			return;
		}
		j.at("camera_params").get_to(p.camera_params);
		j.at("common_params").get_to(p.common_params);
		p.isHaveData = true;
	}
	//--------------------struct_alg_deeplearn--------------------
	struct struct_alg_deeplearn{
		std::string alg_name;
		struct_alg_params alg_params;
		friend void to_json(nlohmann::json& j, const struct_alg_deeplearn& p);
		friend void from_json(const nlohmann::json& j, struct_alg_deeplearn& p);
	private:
		bool isHaveData;
	};

	void to_json(nlohmann::json& j, const struct_alg_deeplearn& p) {
		if (!p.isHaveData) {
			j = nlohmann::json::object();
			return;
		}
		j["alg_name"] = p.alg_name;
		j["alg_params"] = p.alg_params;
	}

	void from_json(const nlohmann::json& j, struct_alg_deeplearn& p) {
		if (j.empty()) {
			p.isHaveData = false;
			return;
		}
		j.at("alg_name").get_to(p.alg_name);
		j.at("alg_params").get_to(p.alg_params);
		p.isHaveData = true;
	}
	//--------------------struct_alg_param_setting--------------------
	struct struct_alg_param_setting{
		struct_alg_deeplearn alg_deeplearn;
		struct_alg_deeplearn alg_tradition;
		friend void to_json(nlohmann::json& j, const struct_alg_param_setting& p);
		friend void from_json(const nlohmann::json& j, struct_alg_param_setting& p);
	private:
		bool isHaveData;
	};

	void to_json(nlohmann::json& j, const struct_alg_param_setting& p) {
		if (!p.isHaveData) {
			j = nlohmann::json::object();
			return;
		}
		j["alg_deeplearn"] = p.alg_deeplearn;
		j["alg_tradition"] = p.alg_tradition;
	}

	void from_json(const nlohmann::json& j, struct_alg_param_setting& p) {
		if (j.empty()) {
			p.isHaveData = false;
			return;
		}
		j.at("alg_deeplearn").get_to(p.alg_deeplearn);
		j.at("alg_tradition").get_to(p.alg_tradition);
		p.isHaveData = true;
	}
}
